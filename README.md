 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# \<Bladeheart\>
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Edmund Wong](https://github.com/edwong078)\> \<[Shane Guthrie](https://github.com/shaneguthriecs)\> \<[Sarokar](https://github.com/Sarokar)\>
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description (Phase I)
 * We think this is important to us because we all share the same passion of playing video games. We see video games as an escape to reality as it immerses us into a whole new universe, so we would like to replicate that feeling in our project. 

 * C++ is a coding language that we've learned at UCR. CMake will be used to create executables. Valgrind can help us detect memory leaks, so that we can fix them. Unity is a game engine that we may possibly use in our project. TBD (?)

* User input to the terminal, or a mouse/controller to control the characters in which the user's inputs would reflect on the screen.

* Strategy Pattern will offer us a way to visualize how each character will interact with each other. RPG will be the base class where there will be textures, assets, sounds, and video effects. Each character will have their own individual skills which will be their composite classes. Each character will have their own gear and weapons as well which will be associated with them. Characters can also interact with each other in certain points of interest where events can occur.
* Composite Pattern will offer us a general way of visualizing our general text in our text-based game. The component class could be the overall game text, and its composite classes would be the item names, character names, dialogue, location names, etc. Our leaf class would give us a variety of choices to choose from, so that gives us more flexibility within the game.

 * Strategy Pattern: One problem that we would anticipate with this strategy pattern is the overall simplicity of the interface could get crowded by multiple objects in the application. This could make it harder to understand as people may not know the strategies that are being implemented. The application needs to know the different strategies that we implement so that it knows which ones to pick for the current event. 
 * Composite Pattern: When using the composite pattern, one problem we might face is although it's a very powerful pattern, it can make the design overly vague which makes it difficult to set your own constraints on the components of a composite. If we want to set our own constraints, we would have to use run-time checks.
 
 *  Strategy Pattern: Strategy pattern may lead to a good solution to our problem because it makes it easier to modify the classes that we implement in our application. It could also simplify our code because we are able to switch strategies with ease. We can choose any required algorithms without implementing a switch case or if-else statements so this can possibly reduce our code.
 *  Composite Pattern: Composite pattern can be a viable option because it can reduce the complexity of the program as it allows us to share objects. Our program will likely have many different classes and objects, so this pattern would make the program appear more organized as each set of characters and items will be classified into their own specified groups. This is a simple and straightforward pattern to visualize our program.
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

 > ## Phase II
 > ## Synopsis: Join a vast world with interesting people and diverse places. You, the player, are an average boy from an average family, but oh! What's this, adventure awaits? You will answer the call and not only save your village, but the world! With incredibly strong monsters and loot galore, this game will crave all your inner desires and change gaming forever. Download BladeHeart now! The user is able to choose their own paths and progress through the story seamlessly whether it be from fighting a great whale or even a car! (WARNING EXPLICIT LANGUAGE) 
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 > ![image](https://user-images.githubusercontent.com/81502341/118722577-27e86b80-b7e1-11eb-94d9-c9f7665ca090.png)

 > The GameClient will manipulate composition throughout our game interface. OverallText is our component class, and it will contain all text classes broken down into its own subclasses. With the use of our combat class, characters can engage in intense combat with enemies that they encounter throughout their journey. Characters will be given attributes such as health, speed, and strength. Dialogue will provide an engaging story that allow characters to make their own choices as they interact with fellow NPCs. Characters will be able to choose from certain weapons as well.  

 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
