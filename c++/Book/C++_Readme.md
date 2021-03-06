# C++_Readme

[TOC]

## 0. vscode 설정

> vscode에서 c++ 컴파일을 위한 설정

```
{
    "terminal.integrated.shell.windows": "C:\\Program Files\\Git\\bin\\bash.exe",
    "workbench.colorTheme": "Material Theme Darker High Contrast",
    "window.zoomLevel": 0,
    "editor.fontFamily": "Hack, Consolas, 'Courier New', monospace, 맑은고딕",
    "code-runner.executorMap": {
        "javascript": "node",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "c": "cd $dirWithoutTrailingSlash && gcc $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe",
        
        // 데이터값 바로 입력원할때.
        // "cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe < d.dat",
    
        // 직접 입력할때
        "cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe",
        "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "php": "php",
        "python": "python",
        "perl": "perl",
        "perl6": "perl6",
        "ruby": "ruby",
        "go": "go run",
        "lua": "lua",
        "groovy": "groovy",
        "powershell": "powershell -ExecutionPolicy ByPass -File",
        "bat": "cmd /c",
        "shellscript": "bash",
        "fsharp": "fsi",
        "csharp": "scriptcs",
        "vbscript": "cscript //Nologo",
        "typescript": "ts-node",
        "coffeescript": "coffee",
        "scala": "scala",
        "swift": "swift",
        "julia": "julia",
        "crystal": "crystal",
        "ocaml": "ocaml",
        "r": "Rscript",
        "applescript": "osascript",
        "clojure": "lein exec",
        "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
        "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
        "racket": "racket",
        "ahk": "autohotkey",
        "autoit": "autoit3",
        "dart": "dart",
        "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
        "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
        "haskell": "runhaskell",
        "nim": "nim compile --verbosity:0 --hints:off --run"
    },
    "code-runner.runInTerminal": true,
}
```

## 1. 190123

### 1.1. 함수오버로딩

1.1.1. 함수 오버로딩, 디폴트 값

## 2. 190124

### 2.1. 상수

2.1.1. 데이터 상수화

2.1.2. 포인터 상수화

2.1.3. 데이터, 포인터 상수화

## 3. 190127

### 3.1. 포인터

3.1.1. 포인터 선언, 초기화

3.1.2. 포인터 연산

## 4. 190203

### 4.1. 메모리 구조

4.1.1. 코드 영역

4.1.2. 데이터 영역

4.1.3. 스택 영역

4.1.4. 힙 영역

### 4.2. 스택 프레임과 스코프

## 5. 190208

### 5.1. `malloc`과 `free` 자료구조

5.1.1. `malloc`의 자료형은 `void *`이다. 

5.1.2. `malloc`은 메모리를 동적으로 할당하고 그 주소값을 넘겨준다.

## 6. 190211

### 6.1. 문자열 포인터

6.1.1. 문자열 포인터는 왜 주소값을 반환하는것이 아니라 문자열을 반환하는것인가?

6.1.2. 문자열을 함수의 인자로 받을 때는 어떻게 해야할까?

### 6.2. 구조체 헤더