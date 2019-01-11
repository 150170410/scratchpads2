FROM geerlingguy/solr:4.x

COPY scratchpads2 /var/solr/scratchpads2
# RUN mkdir /var/solr/scratchpads2/data
RUN chown -R solr /var/solr/scratchpads2

# USER root

CMD ["/opt/solr/bin/solr", "start", "-s", "/var/solr", "-f"]