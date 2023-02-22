var events = require('events');
var eventEmitter = new events.EventEmitter();

//create an Event handler
var EventHandler = function(){
    console.log("I hear a scream!");
}

//Connect the Event handler to an event
eventEmitter.on("scream", EventHandler);

//event
eventEmitter.emit("scream");