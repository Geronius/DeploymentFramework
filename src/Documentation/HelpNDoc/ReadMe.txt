========================================================
HelpNDoc Version 4.6.2.573
========================================================

This file contains useful information about HelpNDoc, an easy to use yet powerful and intuitive environment to create help files and documentations.

--------------------------------------------------------
CONTENTS
--------------------------------------------------------

1. Welcome!
2. System Requirements
3. Installing HelpNDoc
4. First steps with HelpNDoc
5. Purchasing HelpNDoc
6. Version Information
7. Obtaining technical support

--------------------------------------------------------
1. Welcome!
--------------------------------------------------------

IBE Software would like to welcome you to HelpNDoc. We, at IBE Software, believe that you will never see the creation of help files and documentations the same way as before using HelpNDoc.

--------------------------------------------------------
2. System Requirements
--------------------------------------------------------

Recommended Configuration:
  - Windows XP, Windows Vista, Windows 7 or Windows 8
  - 512MB of RAM 
  - 80MB of free disk space
  - 1024x768 screen resolution or higher
  - Help Compiler: Microsoft HTML Help Workshop. Download: http://go.microsoft.com/fwlink/?LinkId=14188
  - MobiPocket/Kindle Compiler : Amazon KindleGen. Download: http://www.amazon.com/kindleformat/KindleGen

--------------------------------------------------------
3. Installing HelpNDoc
--------------------------------------------------------

Just run the helpndoc-setup.exe file and follow the instructions. You can install HelpNDoc over a previously installed version. Don't forget to backup any existing project prior to updating.

--------------------------------------------------------
4. First steps with HelpNDoc
--------------------------------------------------------

You can use the help file to help you get started with the environment.

--------------------------------------------------------
5. Purchasing HelpNDoc
--------------------------------------------------------

You can find more information about ordering HelpNDoc by following this link:
http://www.helpndoc.com/store

--------------------------------------------------------
6. Version Information
--------------------------------------------------------

V4.6.2.573 - November 6, 2014

* Fixed HTML based export: some characters in topic content were not correctly encoded

V4.6.1.571 - November 5, 2014

* ePub and Kindle generated HTML wasn't valid anymore

V4.6.0.558 - October 23rd, 2014

+ Added editable breadcrumb above the topic editor for faster moving within the table of contents' hierarchy
+ New optional CHM decompiler is included which can handle Help Context number import
+ Quick generation process will now indicate which build it is using if it finds a suitable build in the build list
+ Generation process will issue a warning when a template is used by a build but not available on the system
+ Template editor's window has been redesigned and can be resized
* Numbered lists will be correctly generated to HTML even when items are split by paragraphs
* On Windows XP, topics with a lot of broken pictures didn't load completely
* Display of thumbnail for library items is now a lot faster for large libraries
* The Insert items popup menus are now faster to display for large libraries and faster to include pictures
* Pasting and dropping pictures is now a lot faster for large projects
* Popup menus from the "Insert" ribbon tab were sometimes displaying incorrect information
* The "Insert Image Map" button was missing from the "Insert" ribbon toolbar
* Renaming a report template removed any spaces in the new name and didn't select the renamed template
* Links to anchors with a space characters didn't work correctly for CHM, DocX and RTF output formats
* Opening the style inspector could generate an exception
* Section indicator was stuck on "Page settings" in the report template editor
* The new project table of contents importer could generate an exception
* Better CHM import: some specific files didn't include any content
* Better HTML import and code generation

V4.5.0.497 - August 20th, 2014

+ New EPub importer: decompile and import ePub eBooks into new or existing HelpNDoc projects
+ Added option to disable bookmarks generation in PDF documentation output
+ Default HTML template will now add each topic's keywords in the head meta keywords meta for better SEO
* Topic content couldn't be saved and loaded for some systems with Asian or East-European languages locales
* Reduced memory consumption when projects are open
* Setting some specific topic properties such as "Include in builds" could incorrectly update multiple topics
* PDF generator could crash with projects containing the "Myriad Pro" font
* Help file was not showing when HelpNDoc was opened by double clicking and HND project file
* Files with and .xhtml extension where not imported
* Better German and French translations

V4.4.0.418 - June 3rd, 2014

+ Manage keywords and topics association window: quickly associated with multiple topics
+ Many default paths are now configurable: default output, dictionaries, project, styles and templates
+ Added keywords to the analyzer: get stats, a list of keywords, unused keywords, and manage associated topics
* The Generate documentation window will now correctly show the most recently created templates when opened
* HelpNDoc will use the project path when opening or saving the first project
* Folders were incorrectly listed in the project analyzer
* Snippets and image maps didn't have any kind setup in the project analyzer
* Under certain rare conditions DocX generator could crash with an index out of bounds
* Page numbers was always displayed in the table of contents for DocX and PDF even if templates hide it
* Image maps didn't correctly encode characters for the Title text
* An error message could be shown when previewing a corrupted library image
* An error will now be displayed when an image cannot be written to disk due to incorrect characters in name

V4.3.1.364 - April 10th, 2014

* Drag and drop in the topic editor did cause an exception

V4.3.0.363 - April 10th, 2014

+ New image map library item: create reusable image maps for your HTML-based documentations
+ ePub and Kindle eBooks can now optionally include an inline cover page and table of contents page
+ Picture size edit will now optionally resize pictures while constraining proportions
+ Pictures can now have an optional padding, margin and background color
* Better generation of the ePub cover page for better compatibility with Adobe Digital Edition and some e-Readers
* The project analyzer didn't always report broken hyperlinks
* Picture size edits weren't always correctly updated when a picture was resized
* Resetting picture properties didn't update those properties in the ribbon
* Some pictures were not correctly exported to DocX thus generating corrupted files
* Hyperlinks were not always correctly escaped when generating DocX documents thus generating corrupted files
* The JavaScript search engine of the HTML documentation format automatically highlighted the "undefined" word
* There was still problems when saving the changed output file path in the generator window
* The import style dialog's height for French and German translations was not always right

V4.2.0.299 - February 6th, 2014

+ Library items can now be grouped in folders for easier navigation and management
+ Multi-selection has been enabled for library items and keywords for multiple deletion/moving
+ Table of contents, keywords and library items tree nodes expansion status is now saved to and restored from project
+ Template variables names and descriptions can be translated. Existing variables have been translated to French and German
+ It is now possible to remove the cover picture for ePub and Kindle documentation formats
+ Generators log will now provide additional details in case an exception occurs
* The OK and Cancel buttons were not visible in the import style dialog for French and German translations
* It wasn't possible to change picture width, height, spacing or alt text from the ribbon tab anymore
* Better importing of tables in RTF files
* Drag and drop in the topic editor could insert content in the wrong position
* It is now easier to move keywords in the hierarchy when drag and dropping them
* Changing the output file path in the generator window was not always saved correctly
* Scripts: THndIntegerArray was not declared therefore HndTopics.GetTopicIndexHierarchy was not working correctly
* Some style properties could be incorrectly loaded after importing the default.hnd style sheet
* JavaScript search engine didn't correctly escape URLs for external topics which could break the search feature
* The DocX and RTF generation could fail unexpectedly for some projects
* Inserting or importing multiple HTML files in a project could result in very slow and resource hungry generation
* Topic icon wasn't always correctly updated when changing topic

V4.1.0.219 - November 19, 2013

+ Conditional generation of topics based on build kind and tags
+ Double click on a library item in the topic editor to modify it
+ Live spell checker is now available in the snippet editor and template editor
+ Better support for touch screen in the topic editor
* Importing CHM and HTML files with encoded image file names didn't correctly import those images
* Importing CHM and HTML files with images with large file names could crash HelpNDoc
* Better Czech dictionary which can handle accented characters
* Better compatibility with Word 2003 and Word 2007 for generated DocX documents
* Better saving of tables in DocX documents
* Possible exceptions when editing the bottom part of a topic and with the find feature
* An exception could be shown when double clicking on an item in the find result panel
* An exception could be shown when searching in some projects
* Some German text labels were too small to display the whole text
* Better looking lists in welcome screen, recent projects and help pages with scroll bars when needed
* Editing a library item didn't correctly update the topic editor
* Easier assignment of custom topic headers/footers: when choosing custom, the popup menu will not automatically hide
* Topic kind popup will now check the current topic kind
* Code templates didn't respect topic visibility settings

V4.0.3.164 - October 09, 2013

+ The welcome tutorial is now available in German
* Some German translated strings have been corrected
* Generating a project from command line with included external HTML documents was not always including them
* Hyperlinks are now trimmed from the Insert/Edit hyperlink window
* JQuery HTML template had encoding and tag problems
* The help window was shown behind the script editor window

V4.0.2.157 Beta 3 - October 02, 2013

+ HelpNDoc's user interface is now translated in German
+ System variables with date and time are now customizable in project options and will be localized according to project language settings
* Some formatting could produce invalid DOCX documents
* Import folder dialog will now automatically refresh the "files to import" list when browse button is used
* Dragging and dropping a picture when in a table would make it disappear
* Faster project opening: initial topic was loaded twice
* Last topic edited was loaded empty if the project is immediately re-opened
* Link to URL or file topic will now correctly show the URL or file
* ePub and Kindle documentation were adding and extra colon character instead of spaces
* New project dialog uses the dictionary defined by the language property for live spell

V4.0.1.144 Beta 2 - September 23, 2013

+ Merging library items will now display a waiting dialog
* Save a project as the same opened file shows an odd error message
* Images were not scaled correctly anymore when too big for Word and PDF documentation formats
* Hyperlink action provided a different window when used from the popup menu
* Updated OpenOffice.org dictionary download URL
* The font sizes combo box were not reliable anymore for the topic editor, snippet editor, and some template editor properties
* Some characters in hyperlinks could create corrupted DOCX files
* Tables could not be seen in editor anymore when borders were hidden
* Added an error message when trying to add a condition within a table

V4.0.0.136 Beta 1 - September 16, 2013

+ Redesigned style system: styles can inherit from parents, can be saved, and custom styles can be used for new projects
+ The Word generator will now generate standard DOCX documents by default. RTF option is still available in build settings
+ New Word and PDF template editor: customize page layout, cover page, headers, footers, titles, table of contents...
+ New Snippet library item: Add formatted content to the library and re-use it throughout the project
+ Style inspector popup window to get information about the current text and paragraph styles
+ Script editor to edit and run scripts and automate tasks within HelpNDoc
+ Hyperlinks will now use styles for easier project-wide modification
+ Items with anchors will now display a hint with the anchor name when the mouse is over
+ HTML search engine is smarter: it can search parts of words, results are ranked and words can be excluded by prefixing them with a "-" character
+ New system variables for Word and PDF documentations: display the current page number and the total number of pages
+ External topics can now use relative paths for external files
+ Importing a file or a folder won't automatically create a new project anymore: they will be imported in the current project if already open
* Copy/Paste of topics between instances of HelpNDoc now correctly include pictures
* PDF documents could contain un-readable characters in the table of contents when encrypted
* CTRL+F1 keyboard shortcut was showing the help file instead of just collapsing the ribbon bar
* Word generator now uses less memory to generate big documentation files
* iPhone template didn't include custom styles for topic content
* Google Chrome users can now use the HTML search engine locally
* Library items shown in popups were not always sorted
* Word and PDF templates can hide page numbers in the table of contents
* HTML search engine didn't clear its data between two generation which could lead to outdated search data
* HTML search engine will now correctly display link topic kinds
* Help ID generation is smarter: accented characters are replaced by ASCII equivalent for better SEO
* Cursor position in topic editor was not always reset when moving from one topic to another
* Initial Help ID for new topics was incorrectly generated using another topic's caption
* The table of contents title for Word and PDF documentation formats wasn't correctly generated when it contained Chinese characters
* CHM importer can now correctly handle links with anchors
* External topics were not exported to Word and PDF documentation formats
* XSS safety algorithm in the HTML template could break links to topics with caption containing "script" or "javascript"
* Word and PDF documentation formats didn't correctly generate relative hyperlinks
- Can't import HelpNDoc v2.x projects anymore: use version 3.9 to convert older projects first

--------------------------------------------------------
7. Obtaining technical support
--------------------------------------------------------

Website: http://www.helpndoc.com
E-Mail: support@ibe-software.com

--------------------------------------------------------
8. Join us on social networks
--------------------------------------------------------

Facebook: http://www.facebook.com/helpndoc
Twitter: http://www.twitter.com/helpndoc
LinkedIn: http://www.linkedin.com/company/ibe-software/helpndoc-371696/product
YouTube: http://www.youtube.com/user/HelpNDoc
Google+: http://plus.google.com/110136748775560846142

________________________________________________________
Copyright(c) IBE Software 2003 - 2014