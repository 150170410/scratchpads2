<?php
$mail = array();
$mail['subject'] = st('Your new site !site has been created.');
$mail['body'] = st("Dear !username,

!uri

Your new Scratchpad \"!site\" has been created for you.

You can now login to !site by clicking on this link or copying it into your browser:

!login_url

This is a one-time login, so it can be used only once.

Once you have logged in, you will need to set your password by visiting:

!edit_uri

If you experience any problems help is available on the Scratchpad help wiki [1] and by using the \"Issues...\" tab once logged into your Scratchpad.

The Scratchpad Team

[1] http://help.scratchpads.eu/

--
http://scratchpads.eu
scratchpad@nhm.ac.uk");
