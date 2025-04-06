import React from 'react'
interface Props{
    children: string;
    onClick:() => void;
}
const Button = ({children, onClick}: Props) => {
  return (
    <button className= 'btn btn-primary' onClick={onClick}>{children}</button>
  )
}

export default Button