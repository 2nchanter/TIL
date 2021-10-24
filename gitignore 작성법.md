### .gitignore 파일 생성
- .gitignore 파일은 프로젝트 최상위 위치에 존재해야한다.
- 아래의 패턴을 활용하여 git이 untracked할 파일 또는 디렉토리등을 정의하여 파일을 생성한다.

#### 패턴
작성 패턴은 아래의 규칙을 따른다.
- '#'로 시작하는 라인은 무시한다.
- 표준 Glob 패턴을 사용한다.
- 슬래시(/)로 시작하면 하위 디렉터리에 적용되지(recursivity) 않는다.
- 디렉터리는 슬래시(/)를 끝에 사용하는 것으로 표현한다.
- 느낌표(!)로 시작하는 패턴의 파일은 무시하지 않는다.

#### example
```
# ignore all .class files
*.class

# exclude lib.class from "*.class", meaning all lib.class are still tracked
!lib.class

# ignore all json files whose name begin with 'temp-'
temp-*.json

# only ignore the build.log file in current directory, not those in its subdirectories
/build.log

# specify a folder with slash in the end
# ignore all files in any directory named temp
temp/

# ignore doc/notes.txt, but not doc/server/arch.txt
bin/*.txt

# ignore all .pdf files in the doc/ directory and any of its subdirectories
# /** matches 0 or more directories
doc/**/*.pdf
```
