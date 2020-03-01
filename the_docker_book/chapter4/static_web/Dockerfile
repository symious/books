# Version: 0.0.1
FROM ubuntu:14.04
MAINTAINER Janus Chow "janus0203@icloud.com"
ENV REFRESHED_AT 2020-03-01
RUN apt-get -qq update
RUN apt-get install -y nginx
RUN echo "Hi, I am in your container" \
    >/usr/share/nginx/html/index.html
EXPOSE 80
