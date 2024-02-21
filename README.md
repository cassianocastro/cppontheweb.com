# cppontheweb.com

## Description

Using C++ as CGI binary on the WEB.

## Dependencies

- HTTPD (Apache WebServer)
- GNU G++ compiler

### Host configuration

```apache
<VirtualHost *:80>
    ServerName www.cppontheweb.com
    ServerAdmin webmaster@localhost.com

    DocumentRoot /var/www/cppontheweb.com

    <Directory "/var/www/cppontheweb.com">
        Require all granted

        Options +ExecCGI
        AddHandler cgi-script .exe
    </Directory>

    # ScriptAlias "/cgi-bin/" "/var/www/cppontheweb.com/"

    ErrorLog ${APACHE_LOG_DIR}/error.log
    CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
```