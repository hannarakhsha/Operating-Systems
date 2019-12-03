Hanna Rakhsha h_r77
Due Date: 09/19/2019
Assignment: 1

Part 1a:
-Compile program at file location with:
    gcc pre.c -o pre
-Run pre with:
    ./pre
-Prompt for 10 states with population information will appear
-Example test data:
    TX 32
    NY 19
    OK 2
    NJ 5
    CA 23
    CTRL+D

For test data to work it must be 2 letters, followed by a space,
    followed by 1 or 2 numbers, followed by an enter.

-Example output from example test data:
    TX
    NY
    CA


Part 1b:
-Compile program with:
    gcc sort.c -o sort
-Run sort with:
    ./sort
-Prompt for 10 states will appear
-Example test data:
    TX
    NY
    NM
    NJ
    NC
    CA
    CTRL+D

For test data to work it must be 2 letters followed by an enter.

-Example output from example test data:
    CA
    NC
    NJ
    NM
    NY
    TX


Part 2:
-Compile program with:
    gcc pipe.c -o pipe
-Run pipe with:
    ./pipe
-Prompt for 10 states with populations will appear and then second
    prompt for 10 states will appear (data and output will be the
    same as part 1 a and b).



Part 2:
-Compile program with:
    gcc part3.c -o part3
-Run part3 with:
    ./part3 ls
        or
    ./part3 ls -l
        or
    ./part3 ps -a
-Child process ID will appear, followed by execution of UNIX command,
    followed by parent process ID.
