Goals:
1) Create table
    - no constaints
    - int, bigint, varchar -> 256 max
2) Insert rows
    - validation required
3) Select from table 
    - * and at the column level
    - support simple WHERE
    - no ORDER BY required, but would be nice
4) Delete from table 
    - suppor TRUNCATE, Delete
5) Drop table
6) Update row(s) with simple WHERE
7) Meta commands
    - .exit / .quit, .help, .tables

Tests:
.tables
CREATE TABLE logs (id INT, name VARCHAR(64), description VARCHAR(256));
.tables
SELECT * FROM logs;
SELECT name FROM logs;
INSERT INTO logs VALUES ('1', 'Code 200', 'Success!);
INSERT INTO logs VALUES ('2', 'Code 404', 'Forbidden!);
UPDATE logs SET id = 3 WHERE id = 1;
DELETE logs WHERE id = 2;
TRUNCATE TABLE logs;
DROP TABLE logs;
.help
.tables
.exist

Tasks:
1) Create interactive shell (DONE)
2) Create tokenizer
    Tokenize basic inputs (IN PROGRESS)
    Add a few "meta" commands: 
        .exit / quit
        .help
    Space delimited
    Terminates command with ;
    Recognize:
        SELECT * FROM <table>;
        CREATE TABLE <name> (
            COLUMN1: [INT, BIGINT, VARCHAR(<size> < 256)]
        )
    Validate statement
3) Parserit
    From token to method
        Recognize what needs to be done
4) Executor
    Gets necessary commands, decides how to execute them
        Handles execution issues
5) Storage

