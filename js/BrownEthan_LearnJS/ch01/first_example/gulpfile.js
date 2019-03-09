const gulp = require('gulp');
const babel = require('gulp-babel');
//const eslint = require('gulp-eslint');
// Dependancies for Gulp here
gulp.task('default', function() {
        //gulp.src()
        //    .pipe(eslint());
        // source for Node.js
        gulp.src("es6/**/*.js")
           .pipe(babel())
           .pipe(gulp.dest("dist"));
        // source for browser
        gulp.src("public/es6/**/*.js")
           .pipe(babel())
           .pipe(gulp.dest("public/dist"));
});
