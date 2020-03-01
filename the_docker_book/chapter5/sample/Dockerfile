FROM ubuntu:14.04
MAINTAINER Janus Chow "janus0213@icloud.com"
ENV REFRESHED_AT 2020-03-01
RUN apt-get -yqq update && apt-get -yqq install nginx
RUN mkdir -p /var/www/html/website
ADD nginx/global.conf /etc/nginx/conf.d
ADD nginx/nginx.conf /etc/nginx/nginx/conf
EXPOSE 80

