let str = ReasonReact.string;

let count = (s) =>
  switch (s) {
    | 1 => "item"
    | _ => "items"
  };

let component = ReasonReact.statelessComponent("CountItems");

let make = (~size, _children) => {
  ...component,
  render: _self => {
    <div>
     (str(string_of_int(size) ++ " " ++ count(size)))
    </div>
  }
}

