package com.example.projetmobile;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;

public class MainActivity extends AppCompatActivity {

    private Handler mHandler = new Handler();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mHandler.postDelayed(new Runnable() {
            @Override
            public void run() {
                //Intent intent = new Intent(MainActivity.this, RegisterActivity.class);
                Intent intent = new Intent(MainActivity.this, LoginActivity .class);
                startActivity(intent);
            }
        }, 2000);
    }
}