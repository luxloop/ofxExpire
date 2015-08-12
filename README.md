#ofxExpire#


OpenFrameworks addon to "expire" an app (prevent it from running after a given date).

Sometimes you have to send your app over the internets. Or maybe it's an art installation for a show but you won't be there during teardown. Most of the time, we trust people to be decent and not re-use your app or project without your consent. Most of the time, the people we trust actually **are** decent and would never do that.

Sometimes though, for those rare times you've got a bad vibe, or if you don't really know who you're working with, or if the needs of the project dictate it, it would be great if your app just expired.

This is for those rare times.

---

As soon as an ofxExpire instance is created, it checks whether or not it's expired and quits the app (with a modal warning) if it is.

It probably makes the most sense to do this at the top of `setup()`, although I'm sure people will find reasons to do it elsewhere.

Required arguments are the month, day, and year of the last day the app will work.
Month names are predefined, so you can't enter "smarch." [Lousy smarch weather](https://giphy.com/gifs/the-simpsons-homer-o8i5J8YfIuRy0 "smarch").

	ofxExpire e(august, 11, 2015);

I prefer the above syntax, but some people think either of the below declarations is clearer. They all *behave* the same in this case, although they are technically different. Just FYI if it helps you understand what's going on.

	ofxExpire e = ofxExpire(august, 11, 2015);
	ofxExpire(august, 11, 2015);
     
The default alert message is "This app has expired and will now quit"
This can be overridden:

	ofxExpire e(august, 11, 2015, "Custom Alert Message");


#### Aggressive Mode ####
This only works in OS X for now. I don't plan on implementing it for other platforms, but feel free if you want to have a crack.

I debated whether or not to even include this feature, but I can definitely see it being useful. JUST BE CAREFUL! Look at the source code and see what it actually does.

In OS X, you can specify to actually delete the app if it is run after the expiration date. On other systems this will do nothing.

You do this by passing an additional argument at the end:

`ofxExpire e(august, 11, 2015, binary)` will delete the app binary (technically all the contents of the .app file)

`ofxExpire e(august, 11, 2015, both)` will delete the binary **AND** its data directory
     
**WARNING WARNING WARNING WARNING WARNING**    
This actually uses an `rm` command under the hood. If  you don't know what that is, definitely don't use it.
     
If your app has somehow changed its system working directory, or if there is an existing directory called *data* next to your app, **BAD THINGS WILL HAPPEN**
      
You have been warned!
     
Ivaylo    
[@ivaylopg](https://twitter.com/ivaylopg)

[www.luxloop.com](http://www.luxloop.com)    
[@luxloop](https://twitter.com/luxloop)