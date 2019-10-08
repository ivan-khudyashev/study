// Copyright (C) Khudyashev Ivan, 2019
function Point(x, y)
{
  this.x = x;
  this.y = y;
}

Point.prototype.r = function() {
  return Math.sqrt(
      this.x * this.x +
      this.y * this.y
  );
}

function main()
{
  console.log("Start prog");
  var point1 = new Point(3, 4);
  console.log(point1.r());
}

main()