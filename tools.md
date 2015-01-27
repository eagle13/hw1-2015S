Useful Unix Utils
=================

Herein you will find a variety of utility programs commonly available on
Unix systems and some notes as to why you might want to use them.  You can,
of course, learn more about each by using `man`.

Simple Text Utilities
---------------------

### `tr` - translate characters

`tr` is useful for character-based code modifications.  It lets you do
single-character changes or deletions (for every character in a set).

* `tr -d string1` - Deletes every character in `string1` from stdin
* `tr 'a' 'A'`

Scripting Languages
-------------------

### `perl` - practical extraction and report language

A hugely powerful language, originally designed as a tool for sysadmins.
Really nice for hacking out quick text manipulation scripts; not always
nice for building large, maintainable software packages.  (It doesn't help
that there are usually a dozen ways to accomplish any one topic in Perl.)

Tools for C Programmers
-----------------------

### `gdb` - The GNU debugger

A nice, text-based debugger for C (and some other languages).  Sam will
cover this later in the semester.



Filesystem Traversal:
---------------------

* cd - change directory
* diff - compare two files
* mkdir - make a directory
* mv - move a file or rename in place
* df - view extra directory information (-h flag is useful)
* ls - list files in a directory (use -l to get permissions, size)
* pwd - short for "print working directory" and used to find where you are
* chmod - changes the permissions of a file (use +x to make it executable)
* rm - remove a file (bradyjoh uses -rf to remove entire directories)


* man <utility> - look up usage information and similar commands. Use a 
	number as a flag right after "man" to look up information for different 
	commands named the same thing.
* nano - CLI text editor (CTRL+X and then CTRL+Y and then ENTER to exit)
* ssh - connect to another computer's command line
* make - runs the Makefile in the directory, allowing for easier scripting of
	code compilation.

* | - (pipe) take one command's CLI output and "pipe" it to another command 
	to be used as input.
* > - sends a command's CLI output to a file, overwriting anything prior
* >> - sends CLI output to a file, appending to the end of the file if it 
	already exists.

Git:
----

* git init - 
* git clone -
* git status - 
* git commit - 
* git add - 
* git push - 
* git diff -
