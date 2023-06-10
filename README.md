# Back 2 Basics - Tooling to be a better developer

- Alternative titles
    - Learning from your compiler and tools.
    - Your tools can be your teacher!

## Abstract
Many people are excited or terrified for AI when it comes to software development.  However over the years the tools we use to develop have improved significantly. It used to be a the compiler could barely tell us we were missing a semicolon, now it will tell us the exact location.  The results from compilers has improved but are we doing all we can with them?  Do you always understand what they are saying?  

In this talk we will review just how much they have.  We will look at the common tools we use every day in our compilers and static analysis and work through some of the common and edge case errors.  We will pull apart items that are either code specific or linker specific and how to tell the difference.  Then we will look at static analysis and learn how we can use these tools to improve ourselves as developer.  

We will use a cross platform (Windows, Mac, Linux) project to explore best practices for settings in regards to warnings, errors, and static analysis and how to make the best use of them.  Understand some of the trickier items (compiler syntas issue, template errors vs linker) and how to improve our use overall.

No matter what AI brings to the table we all want to be better developers.  Join us in this talk where we will learn to make better use of the tools we have to do just that.

## Outline
- Compiler settings to get the most from your compiler speaking to you.
    - Are you using -Wall -Wwarn -Werrors
- Compare a few older errors to newer ones for history
    - Based on Compiler/Standard 11/14/17/20
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