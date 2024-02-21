# janus-gateway-backend-request-monitor
Rate limit requests/bursts of messages to janus back-end from authendicated users. 

More info about the issue:
[https://github.com/meetecho/janus-gateway/issues/2964](https://github.com/meetecho/janus-gateway/issues/2964#issuecomment-1118033779)

# how to install
1. Modify your 2 Janus files accordingly (janus.c and janus.h) in your janus-gateway directory.
2. "make install" or "sudo make install" (in the "cd janus-gateway", in the janus-gateway directory)
3. restart janus server
