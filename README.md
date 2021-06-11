A work in progress project to develop two communicating C++ applications within seperate Docker containers. 
README.md details build and run command line inputs and notes

Docker Commands

Image Tag 1: 

Build:

docker build . -t <image name>:<image tag>

docker build . -t test_client:1
docker build . -t test_server:1

- "." : selects Dockerfile within the local area?
- "-t" flag : flags the name for the container.
- ":" : number tag for the container

Run:

docker run <image name>:<image tag>

docker run rm test_client:1
docker run rm test_server:1

- "rm" (Optional) : Removes the existing container before starting a new container of same type. Optional and not for use on first run of an image. 
- No ports to be exposed at this stage. 
- No mounts needed at this stage. 

Image Tag 2:

Run:

docker run test_client:2

Build:

docker build . -t test_client:2
docker build . -t test_server:2

Run:

For development environment, interactive mode and bind mount required to enable changes made to source code on host OS be recompiled and ran in container environment. 

docker run -it --entrypoint /bin/bash --mount type=bind,source=/Users/XXXX/Documents/Projects/docker/dockerComms/client,target=/usr/src/client test_client:2

docker run -it --entrypoint /bin/bash --mount type=bind,source=/Users/XXXX/Documents/Projects/docker/dockerComms/server,target=/usr/src/server test_server:2

Compile:

g++ client.cpp -o client
g++ server.cpp -o server

- In -it mode, default docker command to run and compile won't run. Enters -it mode before completing? Or perhaps enters container terminal so host termnial cannot be seen?
- No ports exposed at this stage.
- Bind mount implemented and functioning. Files can be compiled in the container, shared with host OS and ran in container. Changes made in host OS dev area persist when recompiled and ran in container. Rebuild image when dev complete include file changes. 
- "rm" (Optional) : Removes the existing container before starting a new container of same type. Optional and not for use on first run of an image. 

- Figure how to remove binary server file on startup and close?
