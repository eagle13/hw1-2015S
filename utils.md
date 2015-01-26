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
