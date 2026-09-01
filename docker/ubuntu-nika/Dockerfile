FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive \
    NIKA_ROOT=/home/nika/nika_cw \
    NIKA_VENV=/opt/nika-venv \
    LOG_DIR=/home/nika/logs \
    LANG=C.UTF-8

RUN apt-get update && apt-get install -y --no-install-recommends \
      ca-certificates curl gnupg \
      python3 python3-pip python3-venv \
      libglib2.0-0t64 \
      libcurl3t64-gnutls \
      netcat-openbsd \
    && curl -fsSL https://deb.nodesource.com/setup_18.x | bash - \
    && apt-get install -y --no-install-recommends nodejs \
    && npm install -g yarn \
    && mkdir -p /home/nika/logs \
    && rm -rf /var/lib/apt/lists/*

COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

WORKDIR /home/nika/nika_cw
EXPOSE 3033 8000 8090

ENTRYPOINT ["/entrypoint.sh"]
