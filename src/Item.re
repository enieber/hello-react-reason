let component = ReasonReact.statelessComponent("Item");

let make = (~ramal, ~description, _children) => {
  ...component,
  render: self =>
    <div
      style=(ReactDOMRe.Style.make(
		      ~backgroundColor="#444444",
		      ~fontSize="68px", 
		      ()
		)
     )
    >
      <h3>
     	(ReasonReact.string(ramal))
      </h3>
      <p>
      (ReasonReact.string(description))
      </p>
    </div>,
};
