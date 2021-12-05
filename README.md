# Folder_Maker_Looper
A ridiculous program I made to effortlessly make numbered folders.

## About
It makes numbered folders for you. Just confirm that you want to make directories,
where path would they be put into, and how many folders will be made.

## Notes
- I'm having problems with using the iomanip header, it just doesn't work, as such,
  I was not able to make it name the folders with leading zeros dynamically. What I
  mean is that:
  - It should automatically add zeros as 'prefixes' depending on the number of digits
    of the number and its limit, e.g. numbers less than the given 10 request would be:
    01, 02, 03, and so on.
- Basically, the naming system is not good, as if the folders already exists, and
  the next request requires the same amount i.e. you already made 100 folders and
  you want to make 100 of them again, that would result into this: 001, 010, 054 ->
  01, 10, 54, and so on.
