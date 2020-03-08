FROM ubuntu:16.04
MAINTAINER Janus Chow "janus0213@icloud.com"
ENV REFRESHED_AT 2020-03-03

RUN apt-get update -yqq && apt-get -yqq install ruby ruby-dev build-essential redis-tools
RUN gem install --no-rdoc --no-ri sinatra json redis

RUN mkdir -p /opt/webapp

EXPOSE 4567

CMD [ "/opt/webapp/bin/webapp" ]
