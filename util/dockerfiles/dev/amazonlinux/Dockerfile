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
    libffi-devel \
    m4 \
    make \
    man-db \
    openssh-clients \
    openssl \
    openssl-devel \
    perl \
    python27-devel \
    python27-pip \
    wget \
    which

ENV CHPL_VERSION dev
ENV CHPL_HOME    /opt/chapel/$CHPL_VERSION


ENV CHPL_COMM gasnet
ENV GASNET_SPAWNFN S
ENV CHPL_LAUNCHER=aws-ec2

RUN mkdir -p /opt/chapel

ENV PATH $CHPL_HOME/bin/linux64:$CHPL_HOME/util:$PATH
ENV MANPATH $CHPL_HOME/man:$MANPATH
