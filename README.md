# GIT Tips

## Revert a current file to a previous commit

First find out about this history of the file, e.g.

```
commit c163c5c7e52d665922c9c717f301b7c22c7321cd
Author: W. David Li <w.david.li@gmail.com>
Date:   Fri Dec 29 13:47:04 2017 -0800

    update: rev 4

commit d323aa500cf7ab53d7abd2a3996fba5e0a8c7f1a
Author: W. David Li <w.david.li@gmail.com>
Date:   Fri Dec 29 13:41:16 2017 -0800

    update: rev 3

commit 370cdcf1bb9127948a076ffba97fb04a13cc77a8
Author: W. David Li <w.david.li@gmail.com>
Date:   Fri Dec 29 13:40:11 2017 -0800

    update: rev 2

commit 467e8a713945a7d50416997a40562716f64c9f4f
Author: W. David Li <w.david.li@gmail.com>
Date:   Fri Dec 29 13:39:06 2017 -0800

    update: rev 1

commit 74089c3090eccc25b79a1d0518a5364c70297f69
Author: wdli <wdli@hp-server1.(none)>
Date:   Sun Sep 8 08:28:11 2013 -0700

    Add a C program to github to test

```
Then use **git checkout** to checkout the commit id

```
git checkout 467e8a713945 <file name> 
```

Then **git status** and **git commit** to commit the change

