{
    "targets": [{
        "target_name": "helloworldaddon",
        "sources": ["helloworld.cpp"],
        "defines": ["NAPI_DISABLE_CPP_EXCEPTIONS"],
        "include_dirs": ["node_modules/node-addon-api"]
    }
    ]
}