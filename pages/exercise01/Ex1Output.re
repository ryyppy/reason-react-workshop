let component = ReasonReact.statelessComponent(__MODULE__);

/* We use genType here to make this component importable for .mdx & .js */
[@genType]
let make = (_children) => {
    ...component,
    render: _self => {
        <div>{ReasonReact.string("== No Output yet ==")}</div>
    },
};