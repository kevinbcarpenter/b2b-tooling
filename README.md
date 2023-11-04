# Back 2 Basics - Tooling Intuition

- Alternative titles
    - Intuition from your compiler and tools.
    - Your tools provide intuition!
    - Tooling intuition to be a better developer

## Submission Details
**Tags**: Errors, Tools, B2B, Back to Basics, cpp17, cpp20, cpp23 <br />
**Session Type**: Back to Basic<br />
**Level**: Beginner<br />
**Audience**: application developers, library authors<br />
**Session Material**: slides, example code  <br />

## Abstract
Over the years the tools we use to develop have improved significantly. It used to be the compiler that could barely tell us we were missing a semicolon, now it will tell us the exact location.  The results from compilers have improved but are we doing all we can with them?  Do you always understand what they are saying?  

In this talk we will review the improvements by reading their output.  We will look at the common tools we use every day in our compilers and static analysis and work through some of the common and edge case errors.  We will pull apart items that are either code specific or linker specific and how to tell the difference.  Then we will look at static analysis and learn how we can use these tools to improve our development process.  

We will use a cross platform (Windows, Mac, Linux) project to explore best practices for settings regarding warnings, errors, static analysis and how to make the best use of them.  Understand some of the trickier items and how to improve our use overall.

Join us in this talk where we will learn to make better use of the tools, by building our intuiton.


## Outline
- Introduction
    - Bad errors vs good errors
    - no errors compile clean ub code
    - why we use tooling
    - cross platform windows/mac/linux
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



### Things Needed
- find a way to review the most common items from the three platforms and msc/gcc/clang?
- can I get a list of github projects and stats and auto pull them with an api and try to build them to see errors or results and then record that data out?
- sort the data by most recurrent - separate out if they are not difficult or base on the type of error
- search, sort and concensus perhaps from Stack Overflow about different compiler/warning QA.


### Previous Year Talks
Back to Basics: Compiling and Linking - Ben Saks - CppCon 2021<br />
CppCon•31K views<br />

Down the Rabbit Hole: An Exploration of Stack Overflow Questions - Marshall Clow - CppCon 2021<br />
CppCon•14K views<br />

Back To Basics: Debugging Techniques - Bob Steagall - CppCon 2021<br />
CppCon•14K views<br />


### Stack Overflow Links/Research
https://stackoverflow.com/questions/tagged/undefined-reference<br />
https://stackoverflow.com/questions/tagged/linker-errors<br />
https://stackoverflow.com/questions/tagged/unresolved-external<br />
https://api.stackexchange.com<br />


### Notes
Under stress, the brain is gathering and processing many facts, much of which is happening outside of awareness. These facts, formed into patterns, are then sent into high brain processing areas and compared to past experiences. When you get that “gut feeling” you are benefiting from intuition – a pattern match.

Reasoning vs Intution
https://iai.tv/articles/intuition-vs-reason-auid-790

Using MSVC from Command Line
https://learn.microsoft.com/en-us/cpp/build/building-on-the-command-line?view=msvc-160


### CppCon Feedback
Chris Ryan
CppCon 2023
Speaker Liaison
Speakers@CppCon.Org

Repeated of the reviews that were previously sent:
--------------------------------------------

SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition


----------------------- REVIEW 1 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 2 ((Would be acceptable, but perhaps not worth our time))
----- TEXT:
This is a grab bag of recommendations for how to set up a project. This might be better as a written tutorial.



----------------------- REVIEW 2 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 2 ((Would be acceptable, but perhaps not worth our time))
----- TEXT:
I think it is valuable to have some tooling talks in the back to basics track, teaching the difference between linker errors, compiler errors, and static analysis warnings is important. That being said, I have some issues with this submission. Mainly, I would expect a talk from the back to basics track to try to focus on information that people can put to use as soon as possible. The outline makes me question whether this talk would focus on the right things. For example:
* Historical comparison of old and new warnings is good to satisfy curiosity but does not give one applicable tricks.
* I am not sure what is the purpose of talking about all the different C++ standards in this talk, this makes me feel the talk might be unfocused. The outline does not make it clear what is the role of that bullet point for the big picture.
* Very little insights on what flags would be promoted by this talk. Is it about warnings? Security mitigations? Dynamic analysis? 
* Clang tidy shows up in the outline twice, so does cross platform, and there is very little context why, what is the difference between those bullet points.
* The order of bullet points in the outline makes little sense. It mentions code analysis first, and compiler warnings later. I think it is usually a better practice to fix compiler warnings first and move on to static analysis tools once the high-value compiler warnings are solved. 

Overall, I think this is a very important topic, but this submission does not make it clear what the talk would be about, it feels somewhat unfocused, and I do not see a clear structure.



----------------------- REVIEW 3 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 4 ((Solidly what we expect for our program))
----- TEXT:
The abstract looks interesting for beginners and seems to be consistent with the Back to Basics Track.

If this is recorded, this presentation might be of interest to a lot of people that will not participate to the conference.



----------------------- REVIEW 4 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 4 ((Solidly what we expect for our program))
----- TEXT:
I like it that this talk is geared for beginners and back to basics.  I feel like the speaker has ample experience on this subject and seems to have a desire to impart this knowledge at a beginner level, which would be most welcome.  I think this talk could be a fine edition to the back-to-basics track.



----------------------- REVIEW 5 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 4 ((Solidly what we expect for our program))
----- TEXT:
This sounds like a typical beginner talk on best practices for setting up tools in a way that they catch as many bugs as possible at build time, paired with some advice for interpreting error messages. While I would probably not personally attend such a presentation, I can see how this could be a very valuable session for people that are not yet familiar with the C++ tooling ecosystem and are looking for some best practices for setting up their projects.



----------------------- REVIEW 6 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 4 ((Solidly what we expect for our program))
----- TEXT:
Few years ago, I was compiling my code with the new version of my compiler, and I was surprised that I do not understand the warnings and error messages (it took me 30 minutes to find a misplaces const qualifier). They’ve changed. I hope that a comparison of compiler messages (that try to explain the same thing) for different C++ version are shown, too.

Thus, I think that it is important to learn the language of the compiler and linker to quickly understand what they want to tell us. This could be a great talk for the B2B track.



----------------------- REVIEW 7 ---------------------
SUBMISSION: 72
TITLE: TT: Back to Basics: Tooling Intuition
AUTHORS: Kevin Carpenter

----------- Overall evaluation -----------
SCORE: 3 ((Would be positive for the program, but some issues/questions may exist))
----- TEXT:
Reading compiler spew is a craft that requires a lot of experience and training. This talks seems to cover exactly that. I hope it also talks about the intuition and wizardry that sometimes necessary to dig into the rabbithole hidden in your code!
