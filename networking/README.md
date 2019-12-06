Beej's Guide to Network Programming
===

## Compilation

    libraries to compile in Solaris or SunOS: 

        $ cc -o server server.c -lnsl -lsocket -lresolv -lxnet

## Notes

  * a socket is a way to speak to other programs using standard Unix file descriptors
  * Unix programs do any sort of I/O, they do it by reading or writing to a file descripto
  * a file descriptor is an integer associated with an open file
  * everything in Unix is a file, that file can be a network connection, a FIFO, a pipe, a terminal, a real on-the-disk file, or just about anything else
  * so to communicate with another program over the Internet you're gonna do it through a file descriptor,
  * file descriptors for network communication are obtained by calling socket(2), and you communicate with send(2) and recv(2)
  * you *could* use write(2) and read(2) to communicate through the socket but send() and recv() offer much greater control over your data
  * there are several types of sockets:
    - DAPRA internet addresses (internet sockets)
    - path names on a local node (Unix sockets)
    - CCITT x.25 addresses (x.25 sockets that you can safely ignore)
    - etc
  * 

