janus_session *janus_session_create(guint64 session_id) {
/* ..... Add this to janus_session in janus.c*/
	session->num_bursts = 1; /* save number of requests */
/* ..... */	
}
int janus_process_incoming_request(janus_request *request) {
	/*  ..... */
       /* bursts monitor start, if 100 requests are bursted(less than 1 second apart) then disconnect else reset burst*/
	gint64 nowz = 1000000;  /* 1000000 = 1 second, rate limit*/
	gint64 nows = janus_get_monotonic_time();
	gint64 nowx = nows-nowz; /* calculate the time between requests  */
	gint64 nowt = 100;/* disconnect after this many requests  */
	gint64 nowa = 1; /* add +1 to num_bursts  */
	if(session->num_bursts >= nowt) {
			JANUS_LOG(LOG_ERR, "Too many bursts, block. %"SCNu64"... \n", session->num_bursts);
				ret = FALSE;
				goto jsondone;
		} else if(session->last_activity >= nowx) {
			session->num_bursts = session->num_bursts+nowa;
			} else {
		session->num_bursts = 1;
				}
	/* bursts monitor end */
	/*  .....  Add this before  /* Update the last activity timer */*/
}
