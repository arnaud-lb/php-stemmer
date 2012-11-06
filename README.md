php-stemmer
===========

This stem extension for PHP provides stemming capability for a variety of 
languages using Dr. M.F. Porter's Snowball API.

It has a much simpler API than the stem extension found in pecl.

Usage Example
--------------------

> <?php
>    echo stemword('cats', 'english', 'UTF_8');  # cat
>    echo stemword('stemming', 'english', 'UTF_8');  # stem
> ?>

Install
--------------------

The stemmer PHP extension can be installed following the instructions about 
building PHP extensions using phpize as described in the [PHP manual](http://www.php.net/manual/en/install.pecl.phpize.php).

To build this extension, you need to have the PHP development tools installed. 
For ubuntu/debian you can use apt-get install php5-dev.

The phpize command is used to prepare the build environment for a PHP extension. 

In the following sample, the sources for an extension are in a directory named stemmer-php:
> tar -xzf php-stemmer-*.tar.gz
> cd php-stemmer
> phpize
> ./configure
> make -C libstemmer_c
> make
> [sudo] make install

Edit you php.ini file and add the line extension=stemmer.so

About libstemmer_c
--------------------
The stemmer PHP extension uses a modified version of libstemmer_c. 
It has  replaced the default Dutch stemming algorithm with the much better Kraaij-Pohlmann Dutch stemming algorithm. 
The modified version of this lib can be downloaded from mysqludf.com.