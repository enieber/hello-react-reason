let component = ReasonReact.statelessComponent("Item");

let make = (~ramal, ~description, _children) => {
  ...component,
  render: _ =>
    <div>
      <h3>
     	(ReasonReact.string(ramal))
      </h3>
      <p>
      (ReasonReact.string(description))
      </p>
    </div>,
};
    
