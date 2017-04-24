FROM amazonlinux:2017.03.0.20170401

RUN yum install --assumeyes \
    bash \
    bzip2 \
    diffutils \
    file \
    findutils \
    gawk \
    gcc \
    gcc-c++ \
    m4 \
    make \
    man-db \
    perl \
    python27-devel \
    python27-pip \
    wget \
    which

ENV CHPL_VERSION 1.15.0
ENV CHPL_HOME    /opt/chapel/$CHPL_VERSION

RUN mkdir -p /opt/chapel \
    && wget -q -O - https://github.com/chapel-lang/chapel/releases/download/$CHPL_VERSION/chapel-$CHPL_VERSION.tar.gz | tar -xzC /opt/chapel --transform 's/chapel-//' \
    && make -C $CHPL_HOME \
    && make -C $CHPL_HOME chpldoc

ENV PATH $CHPL_HOME/bin/linux64:$CHPL_HOME/util:$PATH
ENV MANPATH $CHPL_HOME/man:$MANPATH
