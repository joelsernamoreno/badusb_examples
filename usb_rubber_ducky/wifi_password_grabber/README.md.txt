Change the following things:

ACCOUNT: Your gmail account
PASSWORD: Your gmail password
RECEIVER: The email you want to send the content of Log.txt to

Suggestions:

If you have any suggestions, write them down here.

For me i needed to add a DELAY 50 betwin the powershell exit and the cmd exit.. (But i'm on an Arduino Mini with a special compiler)
If the wifi ssid has a space like "TPLINK HOME" then A would be set to "TPLINK" and get error "Profile "TPLINK" is not found on the system" -- FIXED
Added the delay after sending the SMTP message, to make sure the EXIT and DEL log.txt are executed (I had issues with this)
The cmd prompt must be elevated to get any passwords. If you change from using the WINDOWS r to using the search menu for "cmd" and pressing ctrl+shift+enter you can get a UAC prompt. From there you'd need to alt+Y to get the elevated prompt.

You can also use the run box but with the following command in Win7 and later: powershell Start-Process cmd -Verb runAs