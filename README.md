# toHttps
Browser plugins for google, ie, firefox.   
When use input domain name without https in browsers, redirect to https if possible.  

功能说明  
======
当用户输入不带https的网址时，插件让用户优先使用https，以保证用户访问安全。  
此插件只针对域名被GFW拦截的情况有效，对于http挟持、DNS污染等情况无效，对于服务器IP被GFW拦截的也无效。后续版本将会改善和加强。  

关于IE版的插件  
======
安装程序在 ie\nsi_setup 目录下，将编译生成的文件toHttps.dll放置在该目录下，用 NSIS 编译 setup_gbk.nsi 脚本可生成安装文件。  
目录下的 toHttps.dll 已签名，toHttpsInstaller.exe 是已编译生成的安装文件，可以直接拿来使用。
