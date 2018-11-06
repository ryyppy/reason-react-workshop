let component = ReasonReact.statelessComponent("ExerciseList");

open Util;
module Link = ReactRouterDom.Link;

[@genType]
let make = _children => {
    ...component,
    render: _ => {
        <ul>
            <li><Link to_="/exercise1"> ("Exercise 1") </Link></li>
            <li><Link to_="/exercise2"> ("Exercise 2") </Link></li>
        </ul>
    }
}