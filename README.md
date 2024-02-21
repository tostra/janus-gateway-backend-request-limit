# janus-gateway-backend-request-monitor
Rate limit requests/bursts of messages to janus back-end from authendicated users that can exhaust your systems CPU. 

Tested: 
Janus legacy in Debian.

More info about the issue:
https://github.com/meetecho/janus-gateway/issues/2964

# how to install
1. Modify your 2 Janus files accordingly (janus.c and janus.h) in your janus-gateway directory.
2. make install (in the "cd janus-gateway", in the janus-gateway directory)
3. restart janus server
