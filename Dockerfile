FROM debian:bookworm-slim

RUN apt update && apt install -y build-essential gdb micro zsh

WORKDIR /código

CMD ["zsh"]