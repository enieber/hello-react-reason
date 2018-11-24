// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var CountItems$ReactTemplate = require("./CountItems.bs.js");

function str(prim) {
  return prim;
}

var component = ReasonReact.reducerComponent("TodoApp");

function newItem(param) {
  return /* record */[
          /* title */"Click a button",
          /* completed */true
        ];
}

function make(children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (param) {
              var send = param[/* send */3];
              var numItems = List.length(param[/* state */1][/* items */0]);
              return React.createElement("div", undefined, React.createElement("div", {
                              className: "title"
                            }, "What to do", React.createElement("button", {
                                  onClick: (function (_evt) {
                                      return Curry._1(send, /* AddItem */0);
                                    })
                                }, "Add something")), React.createElement("div", {
                              className: "items"
                            }, "Nothing"), React.createElement("div", {
                              className: "footer"
                            }, ReasonReact.element(undefined, undefined, CountItems$ReactTemplate.make(numItems, /* array */[]))));
            }),
          /* initialState */(function (param) {
              return /* record */[/* items : :: */[
                        /* record */[
                          /* title */"Write some things to do",
                          /* completed */false
                        ],
                        /* [] */0
                      ]];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, param) {
              return /* Update */Block.__(0, [/* record */[/* items : :: */[
                            /* record */[
                              /* title */"Click a button",
                              /* completed */true
                            ],
                            param[/* items */0]
                          ]]]);
            }),
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.str = str;
exports.component = component;
exports.newItem = newItem;
exports.make = make;
/* component Not a pure module */