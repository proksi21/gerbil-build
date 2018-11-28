gerbil-build

Step 1: gxc -exe -static -s -S test.ss
Step 2: gsc -link -e '(include "/root/gerbil/lib/static/gx-gambc#.scm")' test.scm
Step 3: ./build
