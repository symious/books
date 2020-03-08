FROM ubuntu:18.04
MAINTAINER Janus <janus0203@icloud.com>
ENV REFRESHED_AT 2020-03-03
RUN apt-get -yqq update
RUN apt-get -qq install ruby ruby-dev libffi-dev build-essential nodejs
RUN gem install --no-rdoc --no-ri jekyll -v 2.5.3
VOLUME /data
VOLUME /var/www/html
WORKDIR /data
ENTRYPOINT [ "jekyll", "build", "--destination=/var/www/html" ]
