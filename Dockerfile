FROM emscripten/emsdk
#LABEL Name=webassembly Version=0.0.1
#RUN apt-get update && apt-get install -y build-essential vim sudo python3
WORKDIR /Webassembly
COPY . .
#CMD ["sh", "-c", "/usr/games/fortune -a | cowsay"]