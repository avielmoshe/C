FROM --platform=linux/amd64 ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

# gcc + make + libc headers, valgrind (libc6-dbg gives readable valgrind traces)
RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential \
        gcc \
        make \
        valgrind \
        libc6-dbg \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

CMD ["bash"]
