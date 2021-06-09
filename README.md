A project to develop two communicating C++ applications within seperate Docker containers. 

Docker Commands

Image Tag 1: 

docker build . -t <image name>:<image tag>

docker build . -t test_client:1
docker build . -t test_server:1

- "." : selects Dockerfile within the local area?
- "-t" flag : flags the name for the container.
- ":" : number tag for the container

Run:

docker run rm <image name>:<image tag>

docker run rm test_client:1
docker run rm test_server:1

- "rm" (Optional) : Removes the existing container before starting a new container of same type. Optional and not for use on first run of an image. 
- No ports to be exposed at this stage. 
- No mounts needed at this stage. 