#!/bin/bash
# a script to install server dependencies

# provide messaging colors for output to console
txtbld=$(tput bold)             # Bold
bldgrn=$(tput setaf 2) #  green
bldred=${txtbld}$(tput setaf 1) #  red
txtreset=$(tput sgr0)
elmslnecho(){
  echo "${bldgrn}$1${txtreset}"
}
elmslnwarn(){
  echo "${bldred}$1${txtreset}"
}
# Define seconds timestamp
timestamp(){
  date +"%s"
}
start="$(timestamp)"
yes | apt-get update
# using yum to install the main packages
yes | apt-get -f -y install policycoreutils patch git nano gcc make mysql-server apache2 libapache2-mod-php5 php5 php5-common php5-mysql php-xml-parser php5-cgi php5-curl php5-gd php5-cli php5-fpm php-apc php-pear php5-dev php5-mcrypt php5-gd

# using pecl to install uploadprogress
pecl channel-update pecl.php.net
# uploadprogress to get rid of that warning
pecl install uploadprogress

# adding uploadprogresss to php conf files
touch /etc/php5/mods-available/uploadprogress.ini
echo extension=uploadprogress.so > /etc/php5/mods-available/uploadprogress.ini
cd /etc/php5/apache2/conf.d
ln -s ../../mods-available/uploadprogress.ini 20-uploadprogress.ini
# set httpd_can_sendmail so drupal mails go out
setsebool -P httpd_can_sendmail on
# start mysql to ensure that it is running
/etc/init.d/mysql restart
# make an admin group
groupadd admin
# run the handsfree installer that's the same for all deployments
# kick off hands free deployment
cd $HOME
bash /var/www/elmsln/scripts/install/handsfree/handsfree-install.sh 2 $1 $2 $3 $3 $3 data- $4 $5 $5 admin $6
cd $HOME
source .bashrc
end="$(timestamp)"
elmslnecho "This took $(expr $end - $start) seconds to complete the whole thing!"
