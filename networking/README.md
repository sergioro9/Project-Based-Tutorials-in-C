Beej's Guide to Network Programming
===

## Compilation

to download the files run:

  $ ./examples.sh

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
  * major types of sockets:
    - raw sockets
    - stream sockets: reliable two-way connection communcation streams. If you output two items into the socket in the order “1, 2”, they will arrive in the order “1, 2” at the opposite end. Telnet  uses stream sockets. All the characters you type need to arrive in the same order you type them, right? Also, web browsers use the HTTP protocol which uses stream sockets to get pages. Indeed, if you telnet to a web site on port 80, and type “GET / HTTP/1.0” and hit RETURN twice, it’ll dump the HTML back at you.
    - datagram sockets (aka connectionless sockets, though they can be connected()'d too)

# References

<https://beej.us/guide/bgnet/html//index.html>
