# Back 2 Basics - Tooling Intuition

- Alternative titles
    - Intuition from your compiler and tools.
    - Your tools provide intuition!
    - Tooling intuition to be a better developer

## Abstract
Over the years the tools we use to develop have improved significantly. It used to be the compiler could barely tell us we were missing a semicolon, now it will tell us the exact location.  The results from compilers have improved but are we doing all we can with them?  Do you always understand what they are saying?  

In this talk we will review the improvements by reading their output.  We will look at the common tools we use every day in our compilers and static analysis and work through some of the common and edge case errors.  We will pull apart items that are either code specific or linker specific and how to tell the difference.  Then we will look at static analysis and learn how we can use these tools to improve our development process.  

We will use a cross platform (Windows, Mac, Linux) project to explore best practices for settings regarding warnings, errors, static analysis and how to make the best use of them.  Understand some of the trickier items and how to improve our use overall.

Join us in this talk where we will learn to make better use of the tools, by building our int.


## Outline
- Compiler settings to get the most from your compiler speaking to you.
    - Are you using -Wall -Wwarn -Werrors
    - Clang Tidy for Linux/Mac/Windows
        - Microsoft Code Analysis
- Compare a few older errors to newer ones for history
    - Based on Compiler/Standard 11/14/17/20/23
- Review compiler errors and warnings
    - why they matter, how to fix.
- Review linker errors
    - how they can trick you in your code
    - intuition to tell the difference
    - how to fix.
- Review clang-tidy common complaints and how to fix them
    - using the config to reduce noise.
    - how to tell which ones to follow.
- show examples of setting up clang tidy
- cross platform windows/mac/linux


### Things Needed
- find a way to review the most common items from the three platforms and msc/gcc/clang?
- can I get a list of github projects and stats and auto pull them with an api and try to build them to see errors or results and then record that data out?
- sort the data by most recurrent - separate out if they are not difficult or base on the type of error
- search, sort and concensus perhaps from Stack Overflow about different compiler/warning QA.


### Previous Year Talks
1:03:19
Back to Basics: Compiling and Linking - Ben Saks - CppCon 2021
CppCon•31K views • 1 year ago

1:00:46
Down the Rabbit Hole: An Exploration of Stack Overflow Questions - Marshall Clow - CppCon 2021
CppCon•14K views • 1 year ago

1:04:52
Back To Basics: Debugging Techniques - Bob Steagall - CppCon 2021
CppCon•14K views • 1 year ago


### Stack Overflow Links/Research
https://stackoverflow.com/questions/tagged/undefined-reference
https://stackoverflow.com/questions/tagged/linker-errors
https://stackoverflow.com/questions/tagged/unresolved-external

https://api.stackexchange.com



### Notes
Under stress, the brain is gathering and processing many facts, much of which is happening outside of awareness. These facts, formed into patterns, are then sent into high brain processing areas and compared to past experiences. When you get that “gut feeling” you are benefiting from intuition – a pattern match.

Reasoning vs Intution
https://iai.tv/articles/intuition-vs-reason-auid-790

Using MSVC from Command Line
https://learn.microsoft.com/en-us/cpp/build/building-on-the-command-line?view=msvc-160