FROM ubuntu:16.04
MAINTAINER Janus Chow "janus0213@icloud.com"
ENV REFRESHED_AT 2020-03-03
RUN apt-get -yyq update && apt-get -yqq install redis-server redis-tools
EXPOSE 6379
ENTRYPOINT [ "/usr/bin/redis-server" ] 
CMD []
